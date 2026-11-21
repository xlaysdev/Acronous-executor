/* FUN_1800344b0 @ 1800344b0 */

void FUN_1800344b0(int *param_1,void *param_2,undefined8 param_3)

{
  undefined1 local_a50 [1264];
  undefined1 local_560 [1264];
  int *local_70;
  int *local_68;
  undefined1 *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  memcpy(local_a50,param_2,0x4f0);
  local_39 = 1;
  FUN_180172f70(&local_58,param_1);
  if (*param_1 == 1) {
    memcpy(local_560,param_2,0x4f0);
    FUN_180032520(param_1 + 0xc,1,local_560,&PTR_s_C__Users_burne__cargo_registry_s_1802065b8);
  }
  else {
    memcpy(local_560,param_2,0x4f0);
    local_70 = param_1 + 0xc;
    local_68 = param_1 + 2;
    local_60 = local_560;
    FUN_180032690(param_1 + 0xc,0,&local_70,param_3);
    FUN_180034da0(local_560);
  }
  FUN_18016ec70(&local_58);
  if (local_58 != 2) {
    if (local_58 == 0) {
      LOCK();
      *local_50[0] = *local_50[0] + -1;
      UNLOCK();
      if (*local_50[0] == 0) {
        local_39 = 0;
        FUN_1801635e0(local_50);
      }
    }
    else {
      LOCK();
      *local_50[0] = *local_50[0] + -1;
      UNLOCK();
      if (*local_50[0] == 0) {
        local_39 = 0;
        FUN_180162f80();
      }
    }
  }
  return;
}


