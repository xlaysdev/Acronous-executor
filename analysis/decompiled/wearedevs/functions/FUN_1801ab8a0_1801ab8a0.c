/* FUN_1801ab8a0 @ 1801ab8a0 */

char * FUN_1801ab8a0(char *param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined7 local_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined4 local_30;
  undefined2 local_2c;
  
  cVar2 = *param_2;
  ppuVar5 = *(undefined ***)(param_2 + 0x10);
  if (cVar2 == '\x03') {
    ppuVar4 = *(undefined ***)(param_2 + 0x30);
    if (ppuVar4 == (undefined **)0x0 || ppuVar5 == (undefined **)0x0) {
      cVar2 = '\0';
      if (ppuVar5 == (undefined **)0x0) {
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar8 = 1;
        ppuVar5 = &PTR_LAB_180283288;
        goto joined_r0x0001801ab940;
      }
LAB_1801ab935:
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar9 = *(undefined4 *)(param_2 + 0x20);
      uVar10 = *(undefined4 *)(param_2 + 0x24);
      uVar11 = *(undefined4 *)(param_2 + 0x28);
      uVar12 = *(undefined4 *)(param_2 + 0x2c);
joined_r0x0001801ab940:
      if (ppuVar4 == (undefined **)0x0) {
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar6 = 0xffff;
        uVar7 = 1;
        ppuVar4 = &PTR_LAB_180283288;
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x38);
        uVar13 = *(undefined4 *)(param_2 + 0x40);
        uVar14 = *(undefined4 *)(param_2 + 0x44);
        uVar15 = *(undefined4 *)(param_2 + 0x48);
        uVar16 = *(undefined4 *)(param_2 + 0x4c);
        uVar6 = *(undefined2 *)(param_2 + 0x50);
        local_2c = *(undefined2 *)(param_2 + 0x56);
        local_30 = *(undefined4 *)(param_2 + 0x52);
      }
      *param_1 = cVar2;
      *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_49,local_50);
      *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_48,uStack_49);
      *(undefined ***)(param_1 + 0x10) = ppuVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar10;
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      *(undefined ***)(param_1 + 0x30) = ppuVar4;
      *(undefined8 *)(param_1 + 0x38) = uVar7;
      *(undefined4 *)(param_1 + 0x40) = uVar13;
      *(undefined4 *)(param_1 + 0x44) = uVar14;
      *(undefined4 *)(param_1 + 0x48) = uVar15;
      *(undefined4 *)(param_1 + 0x4c) = uVar16;
      *(undefined2 *)(param_1 + 0x50) = uVar6;
      *(undefined4 *)(param_1 + 0x52) = local_30;
      *(undefined2 *)(param_1 + 0x56) = local_2c;
      return param_1;
    }
    param_1[0] = '\x03';
    param_1[1] = '\x05';
  }
  else {
    if (ppuVar5 == (undefined **)0x0) {
      cVar3 = '\x06';
    }
    else {
      ppuVar4 = *(undefined ***)(param_2 + 0x30);
      if (ppuVar4 != (undefined **)0x0) {
        uStack_48 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 8) >> 8);
        local_50 = (undefined7)*(undefined8 *)(param_2 + 1);
        uStack_49 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x38);
        goto LAB_1801ab935;
      }
      cVar3 = '\a';
    }
    param_1[1] = cVar3;
    *param_1 = '\x03';
    if (cVar2 == '\x02') {
      plVar1 = *(longlong **)(param_2 + 8);
      (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
      thunk_FUN_1801d3330(plVar1,0x20,8);
    }
    if (ppuVar5 == (undefined **)0x0) goto LAB_1801aba14;
  }
  (*(code *)ppuVar5[4])
            (*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
LAB_1801aba14:
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x30) + 0x20))
              (*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x38),
               *(undefined8 *)(param_2 + 0x40));
  }
  return param_1;
}


