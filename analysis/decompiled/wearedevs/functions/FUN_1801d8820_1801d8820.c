/* FUN_1801d8820 @ 1801d8820 */

ulonglong FUN_1801d8820(SOCKET *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = shutdown(*param_1,(uint)param_2);
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    return (ulonglong)uVar2 << 0x20 | 2;
  }
  return 0;
}


