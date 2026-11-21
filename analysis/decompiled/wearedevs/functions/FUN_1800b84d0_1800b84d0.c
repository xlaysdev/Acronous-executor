/* FUN_1800b84d0 @ 1800b84d0 */

int * FUN_1800b84d0(int *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_1 == 2) {
    lVar1 = *param_2;
    if (lVar1 != 2) {
      local_28 = param_2;
      FUN_1801617b0(param_2,param_2[3]);
      if (lVar1 != 0) {
        plVar2 = (longlong *)local_28[1];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003cc40(local_28 + 1);
        }
      }
    }
  }
  else {
    local_38 = param_2[4];
    local_58 = *param_2;
    uStack_50 = (undefined4)param_2[1];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_48 = (undefined4)param_2[2];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_40 = (undefined4)param_2[3];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_58 = FUN_180160380(&local_58);
    if (local_58 != 0) {
      FUN_1801609f0(param_1,&local_58);
    }
  }
  return param_1;
}


