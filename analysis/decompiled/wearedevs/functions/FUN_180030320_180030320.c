/* FUN_180030320 @ 180030320 */

undefined8 *
FUN_180030320(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  void *_Buf1;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong _Size;
  void *pvVar16;
  longlong *unaff_R13;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 local_c8 [40];
  longlong local_a0;
  void *local_98;
  longlong local_90;
  longlong *local_88;
  void *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pvVar16 = (void *)*param_2;
  if (pvVar16 != (void *)0x0) {
    lVar14 = param_2[1];
    _Buf1 = (void *)param_3[1];
    uVar3 = param_3[2];
    do {
      uVar2 = *(ushort *)((longlong)pvVar16 + 0x272);
      lVar18 = (ulonglong)((uint)uVar2 * 8) * 3;
      plVar17 = (longlong *)0xffffffffffffffff;
      lVar13 = (longlong)pvVar16 + 0x168;
      do {
        if (lVar18 == 0) {
          plVar17 = (longlong *)(ulonglong)uVar2;
          goto LAB_1800303e5;
        }
        uVar4 = *(ulonglong *)(lVar13 + 0x10);
        _Size = uVar4;
        if (uVar3 < uVar4) {
          _Size = uVar3;
        }
        iVar12 = memcmp(_Buf1,*(void **)(lVar13 + 8),_Size);
        lVar15 = uVar3 - uVar4;
        if (iVar12 != 0) {
          lVar15 = (longlong)iVar12;
        }
        lVar18 = lVar18 + -0x18;
        plVar17 = (longlong *)((longlong)plVar17 + 1);
        lVar13 = lVar13 + 0x18;
      } while ((char)((0 < lVar15) - (lVar15 < 0)) == '\x01');
      if (0 < lVar15 == lVar15 < 0) {
        if (*param_3 != 0) {
          thunk_FUN_1801d3330(_Buf1,*param_3,1);
        }
        goto LAB_18003043b;
      }
LAB_1800303e5:
      bVar19 = lVar14 == 0;
      lVar14 = lVar14 + -1;
      if (bVar19) goto LAB_18003047e;
      pvVar16 = *(void **)((longlong)pvVar16 + (longlong)plVar17 * 8 + 0x278);
    } while( true );
  }
  local_a0 = *param_3;
  _Buf1 = (void *)param_3[1];
  local_80 = (void *)0x0;
  local_70 = unaff_R13;
joined_r0x000180030436:
  pvVar16 = _Buf1;
  if (SBORROW8(0,local_a0)) {
    plVar17 = param_2;
LAB_18003043b:
    lVar14 = (longlong)plVar17 * 0x20;
    uVar5 = *(undefined8 *)((longlong)pvVar16 + lVar14);
    uVar6 = ((undefined8 *)((longlong)pvVar16 + lVar14))[1];
    puVar1 = (undefined8 *)((longlong)pvVar16 + lVar14 + 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = *param_4;
    uVar10 = param_4[1];
    uVar11 = param_4[3];
    puVar1 = (undefined8 *)((longlong)pvVar16 + lVar14 + 0x10);
    *puVar1 = param_4[2];
    puVar1[1] = uVar11;
    *(undefined8 *)((longlong)pvVar16 + lVar14) = uVar9;
    ((undefined8 *)((longlong)pvVar16 + lVar14))[1] = uVar10;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *param_1 = uVar5;
    param_1[1] = uVar6;
  }
  else {
    local_90 = param_3[2];
    local_78 = 0;
    local_68 = *(undefined4 *)param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_60 = *(undefined4 *)(param_4 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_58 = *(undefined4 *)(param_4 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_50 = *(undefined4 *)(param_4 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_98 = pvVar16;
    local_88 = param_2;
    FUN_180028f10(local_c8,&local_a0,&local_68);
    *(undefined1 *)param_1 = 6;
  }
  return param_1;
LAB_18003047e:
  local_a0 = *param_3;
  local_80 = pvVar16;
  local_70 = plVar17;
  goto joined_r0x000180030436;
}


