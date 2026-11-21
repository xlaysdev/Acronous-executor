/* FUN_18000d3a0 @ 18000d3a0 */

ulonglong FUN_18000d3a0(undefined8 param_1,longlong **param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong **pplVar7;
  undefined8 unaff_R13;
  ulonglong uVar8;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_60;
  longlong **local_58;
  char local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pplVar7 = param_2;
  local_60 = FUN_180168910();
  if (local_60 != 0) {
    local_80 = &local_60;
    local_70 = 0;
    plVar1 = *param_2;
    uVar2 = *param_3;
    local_78 = local_80;
    local_58 = pplVar7;
    do {
      uVar6 = SUB81(pplVar7,0);
      lVar5 = FUN_18016c6f0();
      cVar3 = *(char *)(lVar5 + 0x48);
      if (cVar3 == '\x01') {
LAB_18000d440:
        cVar3 = *(char *)(lVar5 + 0x44);
        uVar6 = *(undefined1 *)(lVar5 + 0x45);
        *(undefined2 *)(lVar5 + 0x44) = 0x8001;
      }
      else if (cVar3 != '\x02') {
        FUN_1801d8880(lVar5,FUN_18002ca60);
        *(undefined1 *)(lVar5 + 0x48) = 1;
        goto LAB_18000d440;
      }
      pplVar7 = &local_80;
      local_4a = cVar3;
      local_49 = uVar6;
      cVar3 = FUN_180167530(plVar1);
      if (cVar3 == '\0') {
        uVar8 = 0;
      }
      else {
        pplVar7 = &local_80;
        uVar4 = FUN_18000ed10(uVar2);
        uVar8 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),(char)uVar4 + '\x01');
      }
      if (local_4a != '\x02') {
        FUN_18016ea70(&local_4a);
      }
      if ((char)uVar8 != '\x02') goto LAB_18000d4a4;
      FUN_1801688a0(param_1);
    } while( true );
  }
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),2);
LAB_18000d4b4:
  return uVar8 & 0xffffffff;
LAB_18000d4a4:
  (**(code **)(local_60 + 0x18))(local_58);
  goto LAB_18000d4b4;
}


