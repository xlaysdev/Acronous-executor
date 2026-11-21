/* FUN_180145e80 @ 180145e80 */

/* WARNING: Instruction at (ram,0x000180146e7f) overlaps instruction at (ram,0x000180146e7d)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_180145e80(undefined4 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined7 uVar8;
  byte *pbVar7;
  byte bVar9;
  undefined8 *in_RCX;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  ulonglong unaff_RDI;
  byte bVar13;
  uint *puVar14;
  undefined8 *in_R10;
  byte *local_8;
  
  local_8 = (byte *)*in_RCX;
  bVar13 = 9;
  if (2 < *local_8) {
    bVar13 = *local_8 - 3;
  }
  puVar14 = &switchD_180145eb4::switchdataD_180253d1c;
  lVar11 = (longlong)(int)(&switchD_180145eb4::switchdataD_180253d1c)[bVar13];
  puVar12 = (undefined8 *)((longlong)&switchD_180145eb4::switchdataD_180253d1c + lVar11);
  bVar9 = (byte)local_8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    FUN_1801f0c50(param_2,"InvalidRepresentation",0x15);
    return;
  case 1:
    FUN_1801f0c50(param_2,"InvalidIntegerPrefix",0x14);
    return;
  case 2:
    FUN_1801f0c50(param_2,"InvalidTableIndex",0x11);
    return;
  case 3:
    FUN_1801f0c50(param_2,"InvalidHuffmanCode",0x12);
    return;
  case 4:
    FUN_1801f0c50(param_2,"InvalidUtf8",0xb);
    return;
  case 5:
    FUN_1801f0c50(param_2,"InvalidStatusCode",0x11);
    return;
  case 6:
    FUN_1801f0c50(param_2,"InvalidPseudoheader",0x13);
    return;
  case 7:
    FUN_1801f0c50(param_2,"InvalidMaxDynamicSize",0x15);
    return;
  case 8:
    FUN_1801f0c50(param_2,"IntegerOverflow",0xf);
    return;
  case 9:
    FUN_1801eff20(param_2,"NeedMore",8,&local_8,&DAT_180253740);
    return;
  case 10:
    cVar6 = *unaff_RSI;
    uVar8 = (undefined7)((ulonglong)param_2 >> 8);
    pcVar1 = (char *)(CONCAT71(uVar8,cVar6) + 99);
    *pcVar1 = *pcVar1 + bVar9;
    pbVar7 = (byte *)CONCAT71(uVar8,cVar6 + -0x7f);
    goto code_r0x000180146091;
  default:
    pbVar7 = (byte *)0x0;
    if ((byte *)0x1 < local_8) {
      pbVar7 = local_8 + -1;
    }
    if ((byte *)0x5 < pbVar7) {
      return;
    }
code_r0x000180146091:
                    /* WARNING: Could not recover jumptable at 0x00018014609f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&switchD_18014609f::switchdataD_180253d44 +
              (longlong)(int)(&switchD_18014609f::switchdataD_180253d44)[(longlong)pbVar7]))();
    return;
  case 0xc:
    *(byte *)(unaff_RBP + -0x75) = *(byte *)(unaff_RBP + -0x75) | bVar9;
    pbVar7 = (byte *)(unaff_RBX + 0x45 + (longlong)local_8 * 4);
    *pbVar7 = *pbVar7 & bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    *(byte **)param_2 = local_8;
    return;
  case 0x11:
    param_2[-0x78] = param_2[-0x78] + (char)param_2;
    uVar2 = *(undefined4 *)(unaff_RBP + -0x15);
    *(undefined4 *)(unaff_RSI + 1) = *(undefined4 *)(unaff_RBP + -0x18);
    *(undefined4 *)(unaff_RSI + 4) = uVar2;
    *(char **)(unaff_RSI + 8) = param_2;
    *(undefined8 **)(unaff_RSI + 0x10) = puVar12;
    cVar6 = '\x03';
    break;
  case 0x12:
    uVar10 = 0xc04d8b4c;
    goto code_r0x000180146e84;
  case 0x13:
    (*(code *)*in_R10)(param_1,param_2,&switchD_180145eb4::switchdataD_180253d1c,
                       *(undefined8 *)((longlong)&UINT_180253d2c + lVar11));
    cVar6 = '\x05';
    break;
  case 0x14:
    puVar12 = (undefined8 *)(unaff_RDI & 0xffffffff);
    *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(unaff_RBP + -0x50);
    param_2 = (char *)(ulonglong)*(byte *)(unaff_RBP + -0x48);
    puVar14 = (uint *)(ulonglong)*(uint3 *)(unaff_RBP + -0x43);
    uVar10 = (ulonglong)*(uint *)(unaff_RBP + -0x47);
    param_4 = *(undefined8 *)(unaff_RBP + -0x40);
code_r0x000180146e84:
    *(undefined8 *)(unaff_RBP + -0x28) = param_4;
    *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RBP + -0x38);
    *(ulonglong *)(unaff_RBP + -0x30) =
         (ulonglong)param_2 & 0xff | uVar10 << 8 | (longlong)puVar14 << 0x28;
    (**(code **)puVar12[4])(unaff_RBP + -0x50,puVar12 + 7,puVar12[5],puVar12[6]);
    cVar6 = *(char *)(unaff_RDI + 0x40);
    uVar3 = *(undefined8 *)(unaff_RBP + -0x50);
    uVar4 = *(undefined8 *)(unaff_RBP + -0x48);
    uVar5 = *(undefined8 *)(unaff_RBP + -0x38);
    *(undefined8 *)(unaff_RSI + 0x30) = *(undefined8 *)(unaff_RBP + -0x40);
    *(undefined8 *)(unaff_RSI + 0x38) = uVar5;
    *(undefined8 *)(unaff_RSI + 0x20) = uVar3;
    *(undefined8 *)(unaff_RSI + 0x28) = uVar4;
    *(undefined8 *)unaff_RSI = *(undefined8 *)(unaff_RBP + -0x10);
    *(undefined8 *)(unaff_RSI + 8) = *(undefined8 *)(unaff_RBP + -0x30);
    *(undefined8 *)(unaff_RSI + 0x10) = *(undefined8 *)(unaff_RBP + -0x28);
    *(undefined8 *)(unaff_RSI + 0x18) = *(undefined8 *)(unaff_RBP + -0x20);
    break;
  case 0x15:
    *param_2 = *param_2 + (char)param_2;
    (**(code **)*puVar12)
              (param_1,(longlong)&UINT_180253d34 + lVar11,
               *(undefined8 *)((longlong)&UINT_180253d24 + lVar11),
               *(undefined8 *)((longlong)&UINT_180253d2c + lVar11));
    param_2 = &DAT_00000004;
  case 0x16:
    cVar6 = (char)param_2;
  }
  unaff_RSI[0x40] = cVar6;
  return;
}


