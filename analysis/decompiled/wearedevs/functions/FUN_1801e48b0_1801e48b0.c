/* FUN_1801e48b0 @ 1801e48b0 */

bool FUN_1801e48b0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 local_14;
  
  if (0xfffffffe < param_3) {
    param_3 = 0xffffffff;
  }
  local_14 = 0;
  iVar1 = WSASend(*(undefined8 *)*param_1,param_2,param_3,&local_14,0,0,0);
  if (iVar1 == -1) {
    WSAGetLastError();
  }
  return iVar1 == -1;
}


