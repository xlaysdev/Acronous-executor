/* FUN_1801d8740 @ 1801d8740 */

undefined8 FUN_1801d8740(SOCKET *param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 4;
  iVar1 = getsockopt(*param_1,0xffff,0x1007,(char *)&local_c,&local_10);
  if (iVar1 == -1) {
    WSAGetLastError();
    return 1;
  }
  if (local_c == 0) {
    return 0;
  }
  return 0;
}


