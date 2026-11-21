/* FUN_18018d920 @ 18018d920 */

bool FUN_18018d920(longlong *param_1,LPOVERLAPPED_ENTRY param_2,ulonglong param_3,longlong *param_4,
                  ulonglong param_5,uint param_6)

{
  longlong *plVar1;
  LPOVERLAPPED_ENTRY p_Var2;
  PVOID pvVar3;
  LPOVERLAPPED p_Var4;
  _struct_541 _Var5;
  longlong lVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 auVar9 [16];
  ULONG_PTR UVar10;
  _union_540 *p_Var11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  BOOL BVar15;
  DWORD DVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  LPOVERLAPPED_ENTRY p_Var23;
  bool bVar24;
  undefined8 local_60;
  byte local_58;
  _union_540 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  LOCK();
  lVar17 = param_1[0xb];
  *(char *)(param_1 + 0xb) = '\x01';
  UNLOCK();
  if ((char)lVar17 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !self.is_polling.swap(true, Ordering::AcqRel)",0x3f,
                  &DAT_180266658);
  }
  lVar17 = FUN_18018d2d0();
  if (lVar17 == 0) {
    local_60 = (LPOVERLAPPED)((ulonglong)local_60._4_4_ << 0x20);
    uVar18 = 0xffffffff;
    if (param_6 != 1000000000) {
      if (param_6 < 0x3b8b87c1) {
        uVar22 = param_6 + 999999;
        uVar18 = param_5;
      }
      else if (param_5 == 0xffffffffffffffff) {
        uVar22 = 1000000000;
      }
      else {
        uVar22 = param_6 + 0xc474783f;
        uVar18 = param_5 + 1;
      }
      if (uVar22 != 1000000000) {
        param_6 = uVar22;
        param_5 = uVar18;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_5;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulonglong)param_6 / 1000000;
      auVar9 = auVar7 * ZEXT816(1000) + auVar9;
      uVar18 = auVar9._0_8_;
      if (0xfffffffe < uVar18) {
        uVar18 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-(uint)(auVar9._8_8_ != 0) | (uint)uVar18);
    }
    uVar20 = 0xffffffff;
    if (param_3 < 0xffffffff) {
      uVar20 = param_3;
    }
    BVar15 = GetQueuedCompletionStatusEx
                       (*(HANDLE *)(*param_1 + 0x10),param_2,(ULONG)uVar20,(PULONG)&local_60,
                        (DWORD)uVar18,0);
    if (BVar15 == 0) {
      DVar16 = GetLastError();
      *(undefined1 *)(param_1 + 0xb) = 0;
      bVar24 = DVar16 != 0x102;
    }
    else {
      uVar18 = (ulonglong)local_60 & 0xffffffff;
      if (param_3 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar18,param_3,&DAT_180266398);
      }
      *(undefined1 *)(param_1 + 0xb) = 0;
      plVar1 = param_1 + 6;
      LOCK();
      bVar24 = (char)param_1[6] == '\0';
      if (bVar24) {
        *(char *)(param_1 + 6) = '\x01';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_180200390(plVar1);
      }
      if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
        bVar14 = 0;
        cVar13 = *(char *)((longlong)param_1 + 0x31);
      }
      else {
        bVar14 = FUN_180200a50();
        bVar14 = bVar14 ^ 1;
        cVar13 = *(char *)((longlong)param_1 + 0x31);
      }
      if (cVar13 != '\0') {
        local_60 = (LPOVERLAPPED)plVar1;
        local_58 = bVar14;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,
                      &PTR_FUN_180266740,&DAT_1802665a0);
      }
      p_Var23 = param_2;
      while (p_Var23 != param_2 + uVar18) {
        p_Var2 = p_Var23 + 1;
        p_Var4 = p_Var23->lpOverlapped;
        if (p_Var4 == (LPOVERLAPPED)0x0) {
          DVar16 = p_Var23->dwNumberOfBytesTransferred;
          UVar10 = p_Var23->lpCompletionKey;
          lVar17 = param_4[2];
          if (lVar17 == *param_4) {
            FUN_1801f8fa0(param_4);
          }
          lVar6 = param_4[1];
          *(ULONG_PTR *)(lVar6 + lVar17 * 0x10) = UVar10;
          *(DWORD *)(lVar6 + 8 + lVar17 * 0x10) = DVar16;
          param_4[2] = lVar17 + 1;
          p_Var23 = p_Var2;
        }
        else if ((p_Var23->lpCompletionKey & 1) == 0) {
          local_50 = &p_Var4[-1].u;
          LOCK();
          bVar24 = (char)p_Var4->Internal == '\0';
          if (bVar24) {
            *(undefined1 *)&p_Var4->Internal = 1;
          }
          UNLOCK();
          if (!bVar24) {
            FUN_180200390(p_Var4);
          }
          if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
            bVar12 = 0;
            cVar13 = *(char *)((longlong)&p_Var4->Internal + 1);
          }
          else {
            bVar12 = FUN_180200a50();
            bVar12 = bVar12 ^ 1;
            cVar13 = *(char *)((longlong)&p_Var4->Internal + 1);
          }
          if (cVar13 != '\0') {
            local_60 = p_Var4;
            local_58 = bVar12;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,
                          &PTR_FUN_1802667b0,&DAT_1802665b8);
          }
          *(undefined1 *)((longlong)&p_Var4[3].Internal + 1) = 0;
          *(undefined4 *)((longlong)&p_Var4[2].hEvent + 4) = 0;
          if ((char)p_Var4[3].Internal == '\0') {
            uVar22 = 0;
            if (*(int *)&p_Var4->hEvent != -0x3ffffee0) {
              if (*(int *)&p_Var4->hEvent < 0) {
                uVar22 = 0x100;
              }
              else if ((p_Var4[1].u.s.Offset != 0) &&
                      (uVar22 = (uint)p_Var4[2].Internal, (uVar22 & 0x20) != 0)) {
                FUN_18018ec50(&p_Var4->InternalHigh);
                goto LAB_18018dc1a;
              }
            }
            uVar22 = uVar22 & *(uint *)&p_Var4[2].hEvent;
            if (uVar22 != 0) {
              *(uint *)&p_Var4[2].hEvent = *(uint *)&p_Var4[2].hEvent ^ uVar22;
              _Var5 = p_Var4[2].u.s;
              lVar17 = param_4[2];
              if (lVar17 == *param_4) {
                FUN_1801f8fa0(param_4);
              }
              lVar6 = param_4[1];
              *(_struct_541 *)(lVar6 + lVar17 * 0x10) = _Var5;
              *(uint *)(lVar6 + 8 + lVar17 * 0x10) = uVar22;
              param_4[2] = lVar17 + 1;
            }
          }
LAB_18018dc1a:
          p_Var11 = local_50;
          if ((char)p_Var4[3].Internal == '\0') {
            LOCK();
            pvVar3 = local_50->Pointer;
            local_50->Pointer = (PVOID)((longlong)local_50->Pointer + 1);
            UNLOCK();
            if (local_50->Pointer == (PVOID)0x0 ||
                SCARRY8((longlong)pvVar3,1) != (longlong)local_50->Pointer < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            local_60 = (LPOVERLAPPED)local_50;
            uVar20 = param_1[7];
            uVar19 = param_1[10];
            if (uVar19 == uVar20) {
              FUN_1801fb9c0(param_1 + 7);
              uVar20 = param_1[7];
              uVar19 = param_1[10];
            }
            param_1[10] = uVar19 + 1;
            uVar21 = 0;
            if (uVar20 <= uVar19 + param_1[9]) {
              uVar21 = uVar20;
            }
            *(_struct_541 **)(param_1[8] + ((uVar19 + param_1[9]) - uVar21) * 8) = &p_Var11->s;
          }
          if (((bVar12 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
             (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
            *(undefined1 *)((longlong)&p_Var4->Internal + 1) = 1;
          }
          LOCK();
          UVar10 = p_Var4->Internal;
          *(undefined1 *)&p_Var4->Internal = 0;
          UNLOCK();
          if ((char)UVar10 == '\x02') {
            WakeByAddressSingle(p_Var4);
          }
          LOCK();
          local_50->Pointer = (PVOID)((longlong)local_50->Pointer + -1);
          UNLOCK();
          if (local_50->Pointer == (PVOID)0x0) {
            FUN_180187b30(&local_50);
          }
          p_Var23 = p_Var2;
        }
        else {
          (*(code *)p_Var4[1].Internal)(p_Var23);
          p_Var23 = p_Var2;
        }
      }
      FUN_18018e110(param_1 + 1);
      if (((bVar14 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x31) = 1;
      }
      bVar24 = false;
      LOCK();
      lVar17 = *plVar1;
      *(char *)plVar1 = '\0';
      UNLOCK();
      if ((char)lVar17 == '\x02') {
        WakeByAddressSingle();
        bVar24 = false;
      }
    }
  }
  else {
    bVar24 = true;
  }
  return bVar24;
}


