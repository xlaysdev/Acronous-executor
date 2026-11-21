/* FUN_1801adee0 @ 1801adee0 */

longlong * FUN_1801adee0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 local_108;
  undefined3 uStack_104;
  undefined1 local_100 [208];
  
  lVar1 = *param_2;
  memcpy(local_100,param_2 + 1,0xd0);
  local_108._0_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xd9);
  local_108._3_1_ = (undefined1)*(undefined4 *)((longlong)param_2 + 0xdc);
  uStack_104 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0xdc) >> 8);
  uVar2 = (char)param_2[0x1b];
  if (lVar1 != 3) {
    memcpy(local_100,param_2 + 1,0xd0);
    local_108._0_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0xd9);
    local_108._3_1_ = (undefined1)*(undefined4 *)((longlong)param_2 + 0xdc);
    uStack_104 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0xdc) >> 8);
    uVar2 = param_3;
  }
  *param_1 = lVar1;
  memcpy(param_1 + 1,local_100,0xd0);
  *(undefined1 *)(param_1 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xd9) = local_108;
  *(uint *)((longlong)param_1 + 0xdc) = CONCAT31(uStack_104,local_108._3_1_);
  return param_1;
}


