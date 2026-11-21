/* thunk_FUN_1801865f0 @ 180171ad0 */

ulonglong thunk_FUN_1801865f0(SOCKET *param_1,byte param_2)

{
  int iVar1;
  DWORD DVar2;
  uint uStack_4;
  
  uStack_4 = (uint)param_2;
  iVar1 = setsockopt(*param_1,0xffff,4,(char *)&uStack_4,4);
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    return (ulonglong)DVar2 << 0x20 | 2;
  }
  return 0;
}


