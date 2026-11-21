/* FUN_1801e04f0 @ 1801e04f0 */

bool FUN_1801e04f0(void)

{
  _SYSTEM_INFO local_38;
  
  local_38.dwNumberOfProcessors = 0;
  local_38.dwProcessorType = 0;
  local_38.dwAllocationGranularity = 0;
  local_38.wProcessorLevel = 0;
  local_38.wProcessorRevision = 0;
  local_38.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_38.dwActiveProcessorMask = 0;
  local_38.u.dwOemId = 0;
  local_38.dwPageSize = 0;
  local_38.lpMinimumApplicationAddress = (LPVOID)0x0;
  GetSystemInfo(&local_38);
  return local_38.dwNumberOfProcessors == 0;
}


