﻿using System.Diagnostics.CodeAnalysis;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private PlayerHealth _player;
    [SerializeField]
    private RectTransform _gameOverGroup;
    [SerializeField]
    private Text _scoreText;
    
    private int _score;						// The player's current score

    //---------------------------------------------------------------------
    // Properties
    //---------------------------------------------------------------------

    public static GameManager Instance { get; private set; }

    public PlayerHealth Player
    {
        get { return _player; }
    }

    //---------------------------------------------------------------------
    // Messages
    //---------------------------------------------------------------------
    
    private void Awake()
    {
        // This is a common approach to handling a class with a reference to itself.
        // If instance variable doesn't exist, assign this object to it
        if (Instance == null)
        {
            Instance = this;
        }
        // Otherwise, if the instance variable does exist, but it isn't this object, destroy this object.
        // This is useful so that we cannot have more than one GameManager object in a scene at a time.
        else if (Instance != this)
        {
            Destroy(this);
        }
    }
    
    //---------------------------------------------------------------------
    // Public
    //---------------------------------------------------------------------
    
    // Called from the EnemyHealth script when an enemy is defeated
    public void AddScore(int points)
    {
        // Add points to the player's score
        _score += points;
        // Update UI
        _scoreText.text = "Score: " + _score;
    }

    public void PlayerDied()
    {
        //If the game over text UI element exists, turn it on
        if(_gameOverGroup != null) _gameOverGroup.gameObject.SetActive(true);
    }

    [SuppressMessage("ReSharper", "UnusedMember.Global")]
    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }
    
}
