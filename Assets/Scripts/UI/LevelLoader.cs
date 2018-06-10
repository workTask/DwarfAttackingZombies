using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LevelLoader : MonoBehaviour
{
	[SerializeField]
	private GameObject _loadingScreenPanel;
	[SerializeField]
	private Slider _slider;
	[SerializeField]
	private Text _progressText;
	
	

	public void LoadLevel(int sceneIndex)
	{
		StartCoroutine(LoadAsynchronously(sceneIndex));
	}

	IEnumerator LoadAsynchronously(int sceneIndex)
	{
		AsyncOperation operation = 	SceneManager.LoadSceneAsync(sceneIndex);
		_loadingScreenPanel.SetActive(true);
		
		while (!operation.isDone)
		{
			float progress = Mathf.Clamp01(operation.progress / .9f);
			
			_slider.value = progress;
			_progressText.text = progress * 100f + "%";
			
			
			yield return null;
		}

	}
}
