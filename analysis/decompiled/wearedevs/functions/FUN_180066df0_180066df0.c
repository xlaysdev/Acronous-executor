/* FUN_180066df0 @ 180066df0 */

undefined8 * FUN_180066df0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 local_100 [20];
  char local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  longlong local_40;
  longlong lStack_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1801b3ac0(&local_80,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  FUN_1801abad0(&local_d8,&local_80);
  if (local_d8 == '\x03') {
    FUN_1801ed500(&local_80,param_2);
    local_30 = *(undefined1 *)(param_2 + 0x50);
    local_40 = *(longlong *)(param_2 + 0x40);
    lStack_38 = *(longlong *)(param_2 + 0x48);
    local_58 = *(undefined4 *)(param_2 + 0x28);
    local_44 = *(undefined4 *)(param_2 + 0x3c);
    local_68 = *(undefined4 *)(param_2 + 0x18);
    uStack_64 = *(undefined4 *)(param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 0x20);
    uStack_5c = *(undefined4 *)(param_2 + 0x24);
    local_54 = *(undefined4 *)(param_2 + 0x2c);
    uStack_50 = *(undefined4 *)(param_2 + 0x30);
    uStack_4c = *(undefined4 *)(param_2 + 0x34);
    uStack_48 = *(undefined4 *)(param_2 + 0x38);
    local_100[0] = 0;
    plVar2 = (longlong *)
             FUN_18006afc0(local_100,
                           "Parsed Url is not a valid UriC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\common\\buf.rs"
                           ,0x1d);
    lVar1 = *plVar2;
    if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
      thunk_FUN_1801d3330(plVar2[1],lVar1,1);
    }
    plVar2[10] = CONCAT71(uStack_2f,local_30);
    plVar2[8] = local_40;
    plVar2[9] = lStack_38;
    plVar2[6] = CONCAT44(uStack_4c,uStack_50);
    plVar2[7] = CONCAT44(local_44,uStack_48);
    plVar2[4] = CONCAT44(uStack_5c,uStack_60);
    plVar2[5] = CONCAT44(local_54,local_58);
    plVar2[2] = lStack_70;
    plVar2[3] = CONCAT44(uStack_64,local_68);
    *plVar2 = local_80;
    plVar2[1] = lStack_78;
    param_1[1] = plVar2;
    *(undefined1 *)param_1 = 3;
  }
  else {
    param_1[10] = local_88;
    param_1[8] = local_98;
    param_1[9] = uStack_90;
    param_1[6] = local_a8;
    param_1[7] = uStack_a0;
    param_1[4] = local_b8;
    param_1[5] = uStack_b0;
    param_1[2] = local_c8;
    param_1[3] = uStack_c0;
    *param_1 = CONCAT71(uStack_d7,local_d8);
    param_1[1] = uStack_d0;
  }
  return param_1;
}


