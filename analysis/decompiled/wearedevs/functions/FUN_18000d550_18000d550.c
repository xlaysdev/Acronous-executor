/* FUN_18000d550 @ 18000d550 */

bool FUN_18000d550(undefined8 param_1,longlong **param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong **pplVar5;
  undefined1 local_578 [1264];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_68;
  longlong **local_60;
  longlong **local_58;
  char local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = 1;
  local_58 = param_2;
  lVar2 = FUN_180168910();
  if (lVar2 != 0) {
    local_88 = &local_68;
    local_78 = 0;
    pplVar5 = local_58;
    local_80 = local_88;
    local_68 = lVar2;
    local_60 = param_2;
    memcpy(local_578,local_58,0x4f0);
    do {
      uVar4 = SUB81(pplVar5,0);
      lVar3 = FUN_18016c6f0();
      cVar1 = *(char *)(lVar3 + 0x48);
      if (cVar1 == '\x01') {
LAB_18000d630:
        cVar1 = *(char *)(lVar3 + 0x44);
        uVar4 = *(undefined1 *)(lVar3 + 0x45);
        *(undefined2 *)(lVar3 + 0x44) = 0x8001;
      }
      else if (cVar1 != '\x02') {
        FUN_1801d8880(lVar3,FUN_18002ca60);
        *(undefined1 *)(lVar3 + 0x48) = 1;
        goto LAB_18000d630;
      }
      pplVar5 = &local_88;
      local_4b = cVar1;
      local_4a = uVar4;
      cVar1 = FUN_180001000(local_578);
      if (local_4b != '\x02') {
        FUN_18016ea70(&local_4b);
      }
      if (cVar1 == '\0') goto LAB_18000d678;
      FUN_1801688a0(param_1);
    } while( true );
  }
  FUN_18000c7a0(local_58);
LAB_18000d6aa:
  return lVar2 == 0;
LAB_18000d678:
  FUN_18000c7a0(local_578);
  local_49 = 0;
  (**(code **)(local_68 + 0x18))(local_60);
  goto LAB_18000d6aa;
}


