/* FUN_1801e4920 @ 1801e4920 */

undefined8 FUN_1801e4920(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  int iVar1;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  iVar1 = send(*(SOCKET *)*param_1,param_2,(int)param_3,0);
  if (iVar1 == -1) {
    WSAGetLastError();
    return 1;
  }
  return 0;
}


