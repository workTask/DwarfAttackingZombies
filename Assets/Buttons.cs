using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buttons : MonoBehaviour
{
    [SerializeField] 
    private Sprite layer_blue, layer_silver;

    public void OnMouseDown()
    {
        GetComponent<SpriteRenderer>().sprite = layer_silver;
    }

    private void OnMouseUp()
    {
        GetComponent<SpriteRenderer>().sprite = layer_blue;
    }
}
