/* FUN_1801e4810 @ 1801e4810 */

undefined8 FUN_1801e4810(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  int iVar1;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  iVar1 = recv(*(SOCKET *)*param_1,param_2,(int)param_3,0);
  if ((iVar1 == -1) && (iVar1 = WSAGetLastError(), iVar1 != 0x274a)) {
    return 1;
  }
  return 0;
}


