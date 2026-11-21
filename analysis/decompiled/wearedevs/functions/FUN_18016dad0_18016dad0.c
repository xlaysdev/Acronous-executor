/* FUN_18016dad0 @ 18016dad0 */

void FUN_18016dad0(longlong *param_1,SOCKET param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  SOCKET local_48;
  SOCKET local_40;
  SOCKET local_38;
  longlong lStack_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_50 = param_3;
  local_48 = param_2;
  uVar1 = FUN_1801798a0(param_4);
  local_38 = local_48;
  lStack_30 = local_50;
  FUN_180179020(&local_68,&local_38,3,uVar1,param_2,param_4);
  if (local_68 == 2) {
    param_1[1] = local_60;
    *param_1 = 2;
    local_40 = local_38;
    FUN_18016d580(lStack_30);
    closesocket(local_40);
  }
  else {
    *param_1 = local_68;
    param_1[1] = local_60;
    param_1[2] = local_58;
    param_1[3] = local_38;
    param_1[4] = lStack_30;
  }
  return;
}


