//------------------------------------------------------------------------------
// Include
//------------------------------------------------------------------------------

namespace glf
{
	namespace section
	{
		//----------------------------------------------------------------------
		inline bool IsGPUSection(int _section)
		{
			return _section & GPUSection;
		}
		//----------------------------------------------------------------------
		inline bool IsCPUSection(int _section)
		{
			return _section & CPUSection;
		}
		//----------------------------------------------------------------------
		inline int  ToIndex(int _section)
		{
			return _section & MaskSection;
		}
		//----------------------------------------------------------------------
	}
}
