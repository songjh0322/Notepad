using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightIntensityController : MonoBehaviour
{
    public Light directionalLight; // Directional Light를 인스펙터에서 할당
    public float targetIntensity = 1.0f; // 목표 밝기
    public float duration = 5.0f; // 밝기가 최대가 되는데 걸리는 시간 (초)

    void Start()
    {
        if (directionalLight == null)
        {
            Debug.LogError("Directional light is not assigned!");
            return;
        }

        // 게임 시작 시 조명의 밝기를 0으로 설정
        directionalLight.intensity = 0;
        StartCoroutine(FadeInLightIntensity());
    }

    IEnumerator FadeInLightIntensity()
    {
        float startTime = Time.time;

        while (Time.time - startTime < duration)
        {
            float t = (Time.time - startTime) / duration;
            directionalLight.intensity = Mathf.Lerp(0, targetIntensity, t);
            yield return null; // 다음 프레임까지 대기
        }

        directionalLight.intensity = targetIntensity; // 최종 밝기 설정
    }
}