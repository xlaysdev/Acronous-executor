/* FUN_18006a400 @ 18006a400 */

longlong * FUN_18006a400(longlong *param_1,ulonglong *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined4 uStack_b3;
  undefined4 uStack_af;
  undefined4 uStack_ab;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  do {
    local_c8 = *(undefined8 *)(param_4 + 0xc);
    local_f8 = *param_4;
    uStack_f4 = param_4[1];
    uStack_f0 = param_4[2];
    uStack_ec = param_4[3];
    local_e8 = param_4[4];
    uStack_e4 = param_4[5];
    uStack_e0 = param_4[6];
    uStack_dc = param_4[7];
    local_d8 = param_4[8];
    uStack_d4 = param_4[9];
    uStack_d0 = param_4[10];
    uStack_cc = param_4[0xb];
    if ((param_2[0x13] != 0) &&
       ((*param_2 == 0 ||
        (cVar1 = FUN_18011bce0(param_2[0x12],param_2[0x13],param_2[1]), cVar1 != '\0')))) {
      FUN_18011c790(&local_c0,param_2 + 0x12,&local_f8);
      if (local_c0 == 4) {
        lVar3 = FUN_180116020();
        goto LAB_18006a589;
      }
      if (local_c0 != 3) {
        param_1[0xf] = CONCAT71(uStack_47,uStack_48);
        *(undefined8 *)((longlong)param_1 + 0x69) = local_57;
        *(ulonglong *)((longlong)param_1 + 0x71) = CONCAT17(uStack_48,uStack_4f);
        *(undefined8 *)((longlong)param_1 + 0x59) = local_67;
        *(undefined8 *)((longlong)param_1 + 0x61) = uStack_5f;
        *(undefined8 *)((longlong)param_1 + 0x49) = local_77;
        *(undefined8 *)((longlong)param_1 + 0x51) = uStack_6f;
        *(undefined8 *)((longlong)param_1 + 0x39) = local_87;
        *(undefined8 *)((longlong)param_1 + 0x41) = uStack_7f;
        *(undefined8 *)((longlong)param_1 + 0x29) = local_97;
        *(undefined8 *)((longlong)param_1 + 0x31) = uStack_8f;
        *(undefined8 *)((longlong)param_1 + 0x19) = local_a7;
        *(undefined8 *)((longlong)param_1 + 0x21) = uStack_9f;
        *(ulonglong *)((longlong)param_1 + 9) = CONCAT44(uStack_b3,local_b7);
        *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT44(uStack_ab,uStack_af);
        *param_2 = 0;
        *param_1 = local_c0;
        *(undefined1 *)(param_1 + 1) = local_b8;
        return param_1;
      }
    }
    uVar2 = param_2[0x13];
    if (param_2[(ulonglong)((byte)param_2[0xc] ^ 1) + 0xd] <= uVar2) {
      lVar3 = FUN_180115720();
      goto LAB_18006a589;
    }
    if (uVar2 != 0) {
      param_2[1] = uVar2;
    }
    *param_2 = (ulonglong)(uVar2 != 0);
    lVar3 = param_3;
    uVar2 = FUN_18006a180(param_2);
    if (uVar2 == 2) {
      *param_1 = 4;
      return param_1;
    }
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_180115d60(lVar3);
      goto LAB_18006a589;
    }
  } while (lVar3 != 0);
  lVar3 = FUN_180115760();
LAB_18006a589:
  *param_1 = 3;
  param_1[1] = lVar3;
  return param_1;
}


