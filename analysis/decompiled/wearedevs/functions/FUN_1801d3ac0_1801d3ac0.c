/* FUN_1801d3ac0 @ 1801d3ac0 */

undefined8
FUN_1801d3ac0(longlong *param_1,undefined8 *****param_2,int *param_3,int *param_4,byte param_5,
             undefined4 param_6,uint param_7,undefined4 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *****local_a8;
  undefined4 local_9c;
  undefined8 *******local_98;
  code *local_90;
  longlong *******local_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  if ((param_2 == (undefined8 *****)0x0) && ((char)plVar1[4] == '\0')) {
LAB_1801d3aed:
    param_1[1] = lVar2 + 1;
    uVar5 = 0;
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    local_a8 = param_2;
    if (lVar2 == 0) {
      local_88 = (longlong *******)(plVar1 + 3);
      pcStack_80 = FUN_1801ee720;
      cVar4 = FUN_1801ef150(*puVar3,puVar3[1],&DAT_18028ea83,&local_88);
      if (cVar4 == '\0') {
        if ((char)plVar1[4] == '\x01') {
          local_88 = (longlong *******)&local_a8;
          pcStack_80 = (code *)&LAB_1801e2ca0;
          uStack_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
          cVar4 = FUN_1801ef150(*(undefined8 *)*plVar1,((undefined8 *)*plVar1)[1],&DAT_18028ea8e,
                                &local_88);
          goto joined_r0x0001801d3bf5;
        }
        goto LAB_1801d3bfb;
      }
    }
    else {
      cVar4 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_18028ea7d,6);
      if (cVar4 == '\0') {
        if ((char)plVar1[4] == '\x01') {
          local_88 = (longlong *******)&DAT_18028ea50;
          pcStack_80 = (code *)&LAB_1801e1670;
          uStack_78 = 0;
          uStack_70 = CONCAT62(uStack_70._2_6_,0x15);
          cVar4 = FUN_1801ef150(*(undefined8 *)*plVar1,((undefined8 *)*plVar1)[1],&DAT_18028ea60,
                                &local_88);
joined_r0x0001801d3bf5:
          if (cVar4 != '\0') goto LAB_1801d3cf6;
        }
LAB_1801d3bfb:
        if (*param_3 == 3) {
          cVar4 = (**(code **)(((undefined8 *)*plVar1)[1] + 0x18))
                            (*(undefined8 *)*plVar1,&DAT_18028ea9a,9);
        }
        else {
          if ((char)plVar1[4] == '\0') {
            local_48 = *(undefined8 *)(param_3 + 0x10);
            uStack_40 = *(undefined8 *)(param_3 + 0x12);
            local_88 = *(longlong ********)param_3;
            pcStack_80 = *(code **)(param_3 + 2);
            uStack_78 = *(undefined8 *)(param_3 + 4);
            uStack_70 = *(undefined8 *)(param_3 + 6);
            local_68 = param_3[8];
            iStack_64 = param_3[9];
            iStack_60 = param_3[10];
            iStack_5c = param_3[0xb];
            local_58 = param_3[0xc];
            iStack_54 = param_3[0xd];
            iStack_50 = param_3[0xe];
            iStack_4c = param_3[0xf];
            uVar5 = *(undefined8 *)*plVar1;
            uVar6 = ((undefined8 *)*plVar1)[1];
            puVar7 = &DAT_18028eaa3;
          }
          else {
            local_48 = *(undefined8 *)(param_3 + 0x10);
            uStack_40 = *(undefined8 *)(param_3 + 0x12);
            local_88 = *(longlong ********)param_3;
            pcStack_80 = *(code **)(param_3 + 2);
            uStack_78 = *(undefined8 *)(param_3 + 4);
            uStack_70 = *(undefined8 *)(param_3 + 6);
            local_68 = param_3[8];
            iStack_64 = param_3[9];
            iStack_60 = param_3[10];
            iStack_5c = param_3[0xb];
            local_58 = param_3[0xc];
            iStack_54 = param_3[0xd];
            iStack_50 = param_3[0xe];
            iStack_4c = param_3[0xf];
            uVar5 = *(undefined8 *)*plVar1;
            uVar6 = ((undefined8 *)*plVar1)[1];
            puVar7 = &DAT_18028eaa9;
          }
          local_90 = FUN_1801e4f80;
          local_98 = &local_88;
          cVar4 = FUN_1801ef150(uVar5,uVar6,puVar7,&local_98);
        }
        if ((cVar4 == '\0') && (cVar4 = FUN_1801f0c50(*plVar1,&DAT_18028ea7c,1), cVar4 == '\0')) {
          if ((param_5 & *param_4 != 2) != 1) goto LAB_1801d3aed;
          local_9c = param_6;
          if ((char)plVar1[4] == '\x01') {
            local_88 = (longlong *******)&DAT_18028ea50;
            pcStack_80 = (code *)&LAB_1801e1670;
            uStack_78 = 0;
            uStack_70 = CONCAT62(uStack_70._2_6_,0x12);
            cVar4 = FUN_1801ef150(*(undefined8 *)*plVar1,((undefined8 *)*plVar1)[1],&DAT_18028ea60,
                                  &local_88);
            if (cVar4 != '\0') goto LAB_1801d3cf6;
          }
          cVar4 = (**(code **)(((undefined8 *)*plVar1)[1] + 0x18))
                            (*(undefined8 *)*plVar1,&DAT_18028ea68,0x10);
          if (cVar4 == '\0') {
            local_88 = (longlong *******)*plVar1;
            pcStack_80 = *(code **)param_4;
            uStack_78 = *(undefined8 *)(param_4 + 2);
            uStack_70 = *(undefined8 *)(param_4 + 4);
            cVar4 = (**(code **)(plVar1[2] + 0x20))(plVar1[1],local_88,&pcStack_80);
            if (cVar4 == '\0') {
              local_88 = (longlong *******)&local_9c;
              pcStack_80 = FUN_1801ee6c0;
              cVar4 = FUN_1801ef150(*(undefined8 *)*plVar1,((undefined8 *)*plVar1)[1],&DAT_18028ea78
                                    ,&local_88);
              if (cVar4 == '\0') {
                if ((param_7 & 1) != 0) {
                  local_98 = (undefined8 *******)CONCAT44(local_98._4_4_,param_8);
                  local_88 = (longlong *******)&local_98;
                  pcStack_80 = FUN_1801ee6c0;
                  cVar4 = FUN_1801ef150(*(undefined8 *)*plVar1,((undefined8 *)*plVar1)[1],
                                        &DAT_18028ea78,&local_88);
                  if (cVar4 != '\0') goto LAB_1801d3cf6;
                }
                cVar4 = (**(code **)(((undefined8 *)*plVar1)[1] + 0x18))
                                  (*(undefined8 *)*plVar1,&DAT_18028ea7c,1);
                if (cVar4 != '\0') {
                  return 1;
                }
                goto LAB_1801d3aed;
              }
            }
          }
        }
      }
    }
LAB_1801d3cf6:
    uVar5 = 1;
  }
  return uVar5;
}


