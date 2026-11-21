/* FUN_1800a5ed0 @ 1800a5ed0 */

void FUN_1800a5ed0(void *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined1 local_150 [256];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  void *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)param_1 + 0x100);
  *(undefined8 *)((longlong)param_1 + 0x100) = 2;
  if (lVar1 != 2) {
    memcpy(local_150,param_1,0x100);
    local_48 = *(undefined4 *)((longlong)param_1 + 0x108);
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x10c);
    uStack_40 = *(undefined4 *)((longlong)param_1 + 0x110);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x114);
    local_21 = 1;
    local_50 = lVar1;
    local_30 = param_1;
    uVar2 = FUN_180115640();
    local_21 = 1;
    FUN_180068680(uVar2,"connection closed",0x11);
    memcpy(local_258,local_30,0x100);
    local_21 = 0;
    local_158 = uVar2;
    FUN_1800a98b0(&local_50,local_258);
    local_38 = (longlong *)((longlong)local_30 + 0x100);
    if (*local_38 != 2) {
      FUN_1800a7560();
      FUN_1800a5d50(local_38);
    }
  }
  return;
}


