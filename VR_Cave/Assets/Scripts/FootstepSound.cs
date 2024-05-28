using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootstepSound : MonoBehaviour
{
    public AudioSource audioSource; // 발자국 소리를 재생할 AudioSource 컴포넌트
    public AudioClip footstepClip;  // 발자국 소리 클립

    void Update()
    {
        // WASD 중 어느 키라도 눌렸는지 확인
        if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.A) ||
            Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.D))
        {
            PlayFootstepSound();
        }
    }

    void PlayFootstepSound()
    {
        if (audioSource != null && footstepClip != null)
        {
            audioSource.PlayOneShot(footstepClip); // 발자국 소리 재생
        }
        else
        {
            Debug.LogError("AudioSource or AudioClip is not assigned!");
        }
    }
}