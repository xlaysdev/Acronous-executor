/* FUN_18003cad0 @ 18003cad0 */

void FUN_18003cad0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar14 = 0x88;
  puVar12 = (undefined8 *)FUN_1801ec950(8);
  puVar13 = puVar12;
  if (lVar14 != 0) {
    FUN_180027490();
    puVar13 = (undefined8 *)thunk_FUN_1801d32d0(lVar14,puVar12);
  }
  if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(puVar12,lVar14);
  }
  *puVar13 = 1;
  puVar13[1] = 1;
  uVar4 = *(undefined4 *)(param_1 + 10);
  uVar7 = param_1[9];
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = param_1[0xb];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x69);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x6a);
  bVar15 = *(char *)((longlong)param_1 + 0x6e) != '\x01';
  if (!bVar15) {
    local_38 = *(undefined8 *)((longlong)param_1 + 0x6f);
    uStack_30 = *(undefined8 *)((longlong)param_1 + 0x77);
  }
  uVar3 = *(undefined2 *)((longlong)param_1 + 0x7f);
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  puVar13[2] = *param_1;
  puVar13[3] = uVar9;
  puVar13[4] = uVar10;
  puVar13[5] = uVar11;
  uVar9 = param_1[5];
  uVar10 = param_1[6];
  uVar11 = param_1[7];
  puVar13[6] = param_1[4];
  puVar13[7] = uVar9;
  puVar13[8] = uVar10;
  puVar13[9] = uVar11;
  puVar13[10] = param_1[8];
  puVar13[0xb] = uVar7;
  *(undefined4 *)(puVar13 + 0xc) = uVar4;
  puVar13[0xd] = uVar8;
  *(undefined4 *)(puVar13 + 0xe) = uVar5;
  *(undefined1 *)(puVar13 + 0xf) = uVar1;
  *(undefined1 *)((longlong)puVar13 + 0x79) = uVar2;
  *(undefined4 *)((longlong)puVar13 + 0x7a) = uVar6;
  *(bool *)((longlong)puVar13 + 0x7e) = !bVar15;
  *(undefined8 *)((longlong)puVar13 + 0x7f) = local_38;
  *(undefined8 *)((longlong)puVar13 + 0x87) = uStack_30;
  *(undefined2 *)((longlong)puVar13 + 0x8f) = uVar3;
  return;
}


