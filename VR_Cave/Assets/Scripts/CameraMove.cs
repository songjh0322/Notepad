using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour
{
    public float moveSpeed = 5.0f; // 카메라 이동 속도
    public float rotateSpeed = 150.0f; // 카메라 회전 속도

    void Update()
    {
        // 전진, 후진 이동
        float vertical = Input.GetAxis("Vertical") * moveSpeed * Time.deltaTime;
        transform.Translate(0, 0, vertical);

        // 좌우 회전
        float horizontal = Input.GetAxis("Horizontal") * rotateSpeed * Time.deltaTime;
        transform.Rotate(0, horizontal, 0);
    }
}
