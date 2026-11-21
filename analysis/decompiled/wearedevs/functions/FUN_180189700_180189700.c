/* FUN_180189700 @ 180189700 */

void FUN_180189700(longlong param_1,undefined8 param_2)

{
  _struct_541 *p_Var1;
  LPOVERLAPPED lpOverlapped;
  _struct_541 _Var2;
  uint uVar3;
  _struct_541 *p_Var4;
  ULONG_PTR UVar5;
  undefined *puVar6;
  char cVar7;
  BOOL BVar8;
  DWORD DVar9;
  uint uVar10;
  bool bVar11;
  _struct_541 *local_80;
  char local_78;
  _struct_541 *local_70;
  _struct_541 *local_68;
  longlong local_60;
  _struct_541 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_3c;
  _struct_541 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lpOverlapped = *(LPOVERLAPPED *)(param_1 + 8);
  local_38 = (_struct_541 *)&lpOverlapped[-1].u;
  LOCK();
  UVar5 = lpOverlapped[5].InternalHigh;
  *(undefined1 *)&lpOverlapped[5].InternalHigh = 0;
  UNLOCK();
  if ((char)UVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("NamedPipe was not previously connecting",0x4f,
                  &PTR_s_C__Users_burne__cargo_registry_s_180265f80);
  }
  local_80 = (_struct_541 *)((ulonglong)local_80 & 0xffffffff00000000);
  BVar8 = GetOverlappedResult((HANDLE)lpOverlapped[5].Internal,lpOverlapped,(LPDWORD)&local_80,0);
  if (BVar8 == 0) {
    DVar9 = GetLastError();
    p_Var4 = local_38;
    local_58 = (_struct_541)((ulonglong)DVar9 << 0x20 | 2);
    p_Var1 = local_38 + 0x18;
    LOCK();
    bVar11 = (char)local_38[0x18].Offset == '\0';
    if (bVar11) {
      *(undefined1 *)&local_38[0x18].Offset = 1;
    }
    UNLOCK();
    if (!bVar11) {
      FUN_180200390(p_Var1);
    }
    puVar6 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      cVar7 = *(char *)((longlong)&p_Var4[0x18].Offset + 1);
      uVar3 = local_3c;
      local_3c = 0;
    }
    else {
      uVar10 = FUN_180200a50();
      cVar7 = *(char *)((longlong)&p_Var4[0x18].Offset + 1);
      uVar3 = local_3c;
      local_3c = uVar10 ^ 1;
    }
    local_78 = (char)local_3c;
    if (cVar7 != '\0') {
      local_80 = p_Var1;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_80,&PTR_FUN_180266128,
                    &PTR_s_C__Users_burne__cargo_registry_s_180265f98);
    }
    _Var2 = p_Var4[0x26];
    if ((_Var2.Offset & 3) == 1) {
      local_68 = p_Var4;
      local_60 = (longlong)_Var2 + -1;
      local_50 = *(undefined8 *)((longlong)_Var2 + -1);
      local_48 = *(undefined8 **)((longlong)_Var2 + 7);
      local_70 = p_Var1;
      if ((code *)*local_48 != (code *)0x0) {
        (*(code *)*local_48)(local_50);
      }
      if (local_48[1] != 0) {
        thunk_FUN_1801d3330(local_50,local_48[1],local_48[2]);
      }
      thunk_FUN_1801d3330(local_60,0x18,8);
      local_68[0x26] = local_58;
      local_78 = (char)local_3c;
      p_Var1 = local_70;
      p_Var4 = local_68;
    }
    else {
      p_Var4[0x26] = local_58;
      local_3c = uVar3;
    }
    if (((local_78 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
      *(undefined1 *)((longlong)&p_Var4[0x18].Offset + 1) = 1;
    }
    LOCK();
    DVar9 = p_Var1->Offset;
    *(undefined1 *)&p_Var1->Offset = 0;
    UNLOCK();
    if ((char)DVar9 == '\x02') {
      WakeByAddressSingle(p_Var1);
    }
  }
  FUN_180189f80(local_38,param_2);
  LOCK();
  *local_38 = (_struct_541)((longlong)*local_38 + -1);
  UNLOCK();
  if (*local_38 == (_struct_541)0x0) {
    FUN_1801876c0(&local_38);
  }
  return;
}


