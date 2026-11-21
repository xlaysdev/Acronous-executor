/* FUN_180123ef0 @ 180123ef0 */

void FUN_180123ef0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68;
  undefined4 local_67;
  undefined3 uStack_63;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  longlong local_30;
  undefined8 *local_28;
  undefined4 local_20;
  undefined3 uStack_1c;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_68 = '\x02';
  if (*(char *)(param_1 + 0x20) != '\x02') {
    local_19 = 1;
    FUN_180128df0(&local_58,param_1 + 0x10);
    local_98 = local_58;
    uStack_90 = plStack_50;
    local_20._0_3_ = (undefined3)((uint)local_48 >> 8);
    local_20._3_1_ = (undefined1)uStack_44;
    uStack_1c = (undefined3)((uint)uStack_44 >> 8);
    local_68 = (char)local_48;
  }
  local_78 = (undefined4)local_98;
  uStack_74 = local_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  local_67 = local_20;
  uStack_63 = uStack_1c;
  local_98 = 0;
  uStack_90 = param_2;
  if (local_68 == '\x02') {
    local_48 = local_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    local_58 = 0;
    plStack_50 = param_2;
  }
  else {
    FUN_180128250(&local_58,&local_78,&local_98);
    if (local_38 == '\x02') goto LAB_180124011;
  }
  if (local_58 == 0) {
    local_30 = *plStack_50;
    plVar1 = plStack_50;
    if (local_30 != 0) {
      local_60 = plStack_50;
      local_28 = (undefined8 *)plStack_50[1];
      if ((code *)*local_28 != (code *)0x0) {
        (*(code *)*local_28)(local_30);
      }
      plVar1 = local_60;
      if (local_28[1] != 0) {
        thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
      }
    }
    thunk_FUN_1801d3330(plVar1,0x18,8);
  }
  else {
    (**(code **)(local_58 + 0x20))
              (CONCAT44(uStack_3c,uStack_40),plStack_50,CONCAT44(uStack_44,local_48));
  }
LAB_180124011:
  local_19 = 0;
  FUN_180076120(&local_78);
  return;
}


