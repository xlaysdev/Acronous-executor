/* FUN_18019c090 @ 18019c090 */

ulonglong * FUN_18019c090(ulonglong *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  size_t _Size;
  void *_Dst;
  size_t _Size_00;
  int iVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong local_80;
  void *local_78;
  size_t local_70;
  char local_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined7 uStack_57;
  byte *local_50;
  ulonglong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  pbVar3 = (byte *)param_2[1];
  _Size = param_2[2];
  if ((_Size != 0) && (*pbVar3 == 0x5b)) {
    if (pbVar3[_Size - 1] == 0x5d) {
      if ((_Size == 1) || ((char)pbVar3[1] < -0x40)) {
        local_50 = pbVar3;
        local_48 = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(pbVar3,_Size,1,_Size - 1,&DAT_180267db0);
      }
      local_50 = pbVar3;
      local_48 = param_2;
      FUN_18019b950(&local_68,pbVar3 + 1,_Size - 2);
      if (local_68 == '\x01') {
        *(undefined1 *)(param_1 + 1) = uStack_67;
        uVar5 = 0x8000000000000003;
      }
      else {
        *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_64,CONCAT21(uStack_66,uStack_67));
        *(uint *)((longlong)param_1 + 0xc) = CONCAT13(uStack_60,uStack_64._1_3_);
        *(undefined4 *)(param_1 + 2) = uStack_5f;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_5b;
        uVar5 = 0x8000000000000002;
      }
      *param_1 = uVar5;
      uVar5 = *local_48;
      pbVar3 = local_50;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 0x8000000000000003;
      uVar5 = *param_2;
    }
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      thunk_FUN_1801d3330(pbVar3,uVar5,1);
    }
    return param_1;
  }
  pbVar9 = pbVar3;
  do {
    while( true ) {
      if (pbVar9 == pbVar3 + _Size) {
        local_68 = (char)pbVar3;
        uStack_67 = (undefined1)((ulonglong)pbVar3 >> 8);
        uStack_66 = (undefined2)((ulonglong)pbVar3 >> 0x10);
        uStack_64 = (undefined4)((ulonglong)pbVar3 >> 0x20);
        uStack_60 = (undefined1)_Size;
        uStack_5f = (undefined4)(_Size >> 8);
        uStack_5b._0_3_ = (undefined3)(_Size >> 0x28);
        uStack_5b = CONCAT13(0xa0,(undefined3)uStack_5b);
        uStack_57 = 0x180267d;
        local_50 = pbVar3;
        local_48 = param_2;
        FUN_1801aa390(&local_80,&local_68);
        pbVar3 = local_50;
        _Size_00 = local_70;
        if (SBORROW8(0,local_80)) {
          if ((local_70 == _Size) && (iVar4 = memcmp(local_78,local_50,_Size), iVar4 == 0)) {
            param_1[2] = local_48[2];
            uVar5 = local_48[1];
            *param_1 = *local_48;
            param_1[1] = uVar5;
            return param_1;
          }
          FUN_1800290b0(&local_68,_Size_00,0,1,1);
          uVar5 = CONCAT35((undefined3)uStack_5b,CONCAT41(uStack_5f,uStack_60));
          if (CONCAT22(uStack_66,CONCAT11(uStack_67,local_68)) == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_18020171e(uVar5,CONCAT71(uStack_57,uStack_5b._3_1_));
          }
          _Dst = (void *)CONCAT71(uStack_57,uStack_5b._3_1_);
          memcpy(_Dst,local_78,_Size_00);
          local_80 = uVar5;
          local_78 = _Dst;
        }
        param_1[2] = local_70;
        *param_1 = local_80;
        param_1[1] = (ulonglong)local_78;
        if ((*local_48 & 0x7fffffffffffffff) == 0) {
          return param_1;
        }
        thunk_FUN_1801d3330(pbVar3,*local_48,1);
        return param_1;
      }
      bVar2 = *pbVar9;
      uVar8 = (uint)bVar2;
      if ((char)bVar2 < '\0') break;
      pbVar9 = pbVar9 + 1;
joined_r0x00018019c1a0:
      if (uVar8 < 0x7d) goto LAB_18019c1e0;
    }
    pbVar1 = pbVar9 + 1;
    if (0xdf < bVar2) {
      uVar7 = pbVar9[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (bVar2 < 0xf0) {
        pbVar9 = pbVar9 + 3;
        uVar8 = uVar7 | (uVar8 & 0x1f) << 0xc;
      }
      else {
        pbVar1 = pbVar9 + 3;
        pbVar9 = pbVar9 + 4;
        uVar8 = *pbVar1 & 0x3f | uVar7 << 6 | (uVar8 & 7) << 0x12;
      }
      goto joined_r0x00018019c1a0;
    }
    pbVar9 = pbVar9 + 2;
    uVar8 = (uVar8 & 0x1f) << 6 | *pbVar1 & 0x3f;
  } while (0x7c < uVar8);
LAB_18019c1e0:
                    /* WARNING: Could not recover jumptable at 0x00018019c1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (ulonglong *)
           (*(code *)(&DAT_180267e70 + *(int *)(&DAT_180267e70 + (ulonglong)uVar8 * 4)))
                     (pbVar3,param_2,_Size,
                      &DAT_180267e70 + *(int *)(&DAT_180267e70 + (ulonglong)uVar8 * 4));
  return puVar6;
}


