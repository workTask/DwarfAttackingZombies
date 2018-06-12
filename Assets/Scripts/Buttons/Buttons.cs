using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buttons : MonoBehaviour
{
    [SerializeField] 
    private Sprite layer_blue, layer_orange;

    public void OnMouseDown()
    {
        GetComponent<SpriteRenderer>().sprite = layer_orange;
    }

    private void OnMouseUp()
    {
        GetComponent<SpriteRenderer>().sprite = layer_blue;
    }

    public void onPause()
    {
        
        Debug.Log("Pause");
    }
}
