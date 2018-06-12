template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>(const char*);
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; template <> void RegisterClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>(const char*);
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>(const char*);
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>(const char*);
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 88 non stripped classes
	//0. Animator
	RegisterClass<Animator>("Animation");
	//1. Behaviour
	RegisterClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//4. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//5. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//6. NamedObject
	RegisterClass<NamedObject>("Core");
	//7. Camera
	RegisterClass<Camera>("Core");
	//8. LineRenderer
	RegisterClass<LineRenderer>("Core");
	//9. Renderer
	RegisterClass<Renderer>("Core");
	//10. Shader
	RegisterClass<Shader>("Core");
	//11. Mesh
	RegisterClass<Mesh>("Core");
	//12. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//13. Material
	RegisterClass<Material>("Core");
	//14. Texture
	RegisterClass<Texture>("Core");
	//15. Texture2D
	RegisterClass<Texture2D>("Core");
	//16. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//17. Sprite
	RegisterClass<Sprite>("Core");
	//18. GameObject
	RegisterClass<GameObject>("Core");
	//19. GUIElement
	RegisterClass<GUIElement>("Core");
	//20. GUILayer
	RegisterClass<GUILayer>("Core");
	//21. Transform
	RegisterClass<Transform>("Core");
	//22. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//23. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//24. Collider
	RegisterClass<Collider>("Physics");
	//25. AudioClip
	RegisterClass<AudioClip>("Audio");
	//26. SampleClip
	RegisterClass<SampleClip>("Audio");
	//27. AudioListener
	RegisterClass<AudioListener>("Audio");
	//28. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//29. AudioSource
	RegisterClass<AudioSource>("Audio");
	//30. NavMeshAgent
	RegisterClass<NavMeshAgent>("AI");
	//31. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//32. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//33. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//34. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//35. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//36. CapsuleCollider
	RegisterClass<CapsuleCollider>("Physics");
	//37. PreloadData
	RegisterClass<PreloadData>("Core");
	//38. Cubemap
	RegisterClass<Cubemap>("Core");
	//39. Texture3D
	RegisterClass<Texture3D>("Core");
	//40. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//41. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//42. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//43. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//44. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//45. GameManager
	RegisterClass<GameManager>("Core");
	//46. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//47. TagManager
	RegisterClass<TagManager>("Core");
	//48. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//49. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//50. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//51. TimeManager
	RegisterClass<TimeManager>("Core");
	//52. InputManager
	RegisterClass<InputManager>("Core");
	//53. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//54. MonoScript
	RegisterClass<MonoScript>("Core");
	//55. TextAsset
	RegisterClass<TextAsset>("Core");
	//56. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//57. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//58. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//59. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//60. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//61. MonoManager
	RegisterClass<MonoManager>("Core");
	//62. AudioManager
	RegisterClass<AudioManager>("Audio");
	//63. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>("AI");
	//64. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//65. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>("PerformanceReporting");
	//66. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>("UnityAnalytics");
	//67. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//68. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//69. FlareLayer
	RegisterClass<FlareLayer>("Core");
	//70. Light
	RegisterClass<Light>("Core");
	//71. LightProbes
	RegisterClass<LightProbes>("Core");
	//72. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//73. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//74. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>("Core");
	//75. Motion
	RegisterClass<Motion>("Animation");
	//76. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//77. AnimatorController
	RegisterClass<AnimatorController>("Animation");
	//78. Avatar
	RegisterClass<Avatar>("Animation");
	//79. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//80. MeshCollider
	RegisterClass<MeshCollider>("Physics");
	//81. AudioMixerGroup
	RegisterClass<AudioMixerGroup>("Audio");
	//82. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>("Audio");
	//83. AudioMixer
	RegisterClass<AudioMixer>("Audio");
	//84. NavMeshSettings
	RegisterClass<NavMeshSettings>("AI");
	//85. NavMeshData
	RegisterClass<NavMeshData>("AI");
	//86. MasterServerInterface
	//Skipping MasterServerInterface
	//87. NetworkManager
	//Skipping NetworkManager

}
