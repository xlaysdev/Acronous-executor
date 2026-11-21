/* FUN_1801866a0 @ 1801866a0 */

ulonglong FUN_1801866a0(SOCKET *param_1,undefined4 param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(*param_1,0xffff,0x1002,(char *)&local_4,4);
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20 | 2;
  }
  return 0;
}


