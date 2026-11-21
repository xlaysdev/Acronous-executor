/* FUN_180186640 @ 180186640 */

ulonglong FUN_180186640(SOCKET *param_1,undefined8 param_2)

{
  SOCKET s;
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  char local_14 [4];
  
  s = *param_1;
  local_14[0] = '\x01';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  iVar1 = setsockopt(s,0xffff,8,local_14,4);
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20 | 2;
  }
  uVar3 = FUN_180186d50(s,param_2);
  return uVar3;
}


