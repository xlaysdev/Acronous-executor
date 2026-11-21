/* FUN_1801eb3e7 @ 1801eb3e7 */

void FUN_1801eb3e7(longlong *param_1,undefined8 param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*param_1 == 0) {
    local_38 = (undefined4)param_1[1];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_30 = (undefined4)param_1[2];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x14);
    local_28 = 0;
    local_20 = 0;
    local_10 = 0;
    local_18 = param_2;
    FUN_1801e7288(&local_38,1);
    return;
  }
  FUN_1801eb443();
  return;
}


