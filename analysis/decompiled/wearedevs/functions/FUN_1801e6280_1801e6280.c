/* FUN_1801e6280 @ 1801e6280 */

undefined8 FUN_1801e6280(char *param_1,undefined8 *param_2)

{
  DWORD64 DVar1;
  DWORD64 ControlPc;
  char cVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  PCONTEXT in_stack_fffffffffffff988;
  _CONTEXT local_658;
  PVOID local_180 [3];
  char *local_168;
  char *local_160;
  char *local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined8 **local_140;
  char *local_138;
  undefined4 *local_130;
  undefined8 local_118;
  undefined8 uStack_110;
  DWORD64 local_108;
  undefined8 *local_f8;
  ulonglong *local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined4 local_d0 [2];
  DWORD64 local_c8;
  DWORD64 local_c0;
  DWORD64 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  DWORD64 local_90;
  char local_88;
  undefined8 **local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = *param_1;
  local_4a = cVar2;
  FUN_1801d7750(&local_658);
  if (SBORROW8(0,local_658.P1Home)) {
    if (((uint)local_658.P2Home & 3) == 1) {
      local_70 = local_658.P2Home - 1;
      local_60 = *(undefined8 *)(local_658.P2Home - 1);
      local_58 = *(undefined8 **)(local_658.P2Home + 7);
      if ((code *)*local_58 != (code *)0x0) {
        (*(code *)*local_58)(local_60);
      }
      if (local_58[1] != 0) {
        thunk_FUN_1801d3330(local_60,local_58[1],local_58[2]);
      }
      thunk_FUN_1801d3330(local_70,0x18,8);
    }
  }
  else {
    local_108 = local_658.P4Home;
    local_118 = local_658.P2Home;
    uStack_110 = local_658.P3Home;
  }
  local_60 = CONCAT71(local_60._1_7_,cVar2);
  local_a8 = local_658.P1Home;
  local_a0 = (undefined4)local_118;
  uStack_9c = local_118._4_4_;
  uStack_98 = (undefined4)uStack_110;
  uStack_94 = uStack_110._4_4_;
  local_90 = local_108;
  local_88 = cVar2;
  local_58 = param_2;
  cVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,"stack backtrace:\n",0x11);
  if (cVar2 == '\0') {
    local_f8 = local_58;
    local_e0 = 0;
    local_d8 = (char)local_60;
    local_f0 = &local_a8;
    local_e8 = &PTR_FUN_18028ffc8;
    local_49 = '\0';
    local_b0 = 0;
    local_4d = 1;
    local_4b = (char)local_60;
    uVar4 = 0;
    memset(&local_658,0,0x4d0);
    RtlCaptureContext(&local_658);
    while( true ) {
      ControlPc = local_658.Rip;
      local_68 = 0;
      FunctionEntry = RtlLookupFunctionEntry(local_658.Rip,&local_68,(PUNWIND_HISTORY_TABLE)0x0);
      if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) break;
      local_d0[0] = 0;
      local_c8 = local_68;
      local_b8 = local_658.Rsp;
      if (local_4a == '\0' && 100 < uVar4) break;
      local_4c = '\0';
      local_168 = &local_4c;
      local_160 = &local_4a;
      local_158 = &local_4b;
      local_150 = &local_b0;
      local_148 = &local_4d;
      local_140 = &local_f8;
      local_138 = &local_49;
      local_130 = local_d0;
      local_c0 = ControlPc;
      FUN_1801d44b0(1,local_d0,&local_168,&DAT_18028ece0);
      DVar1 = local_658.Rsp;
      cVar2 = local_49;
      if ((local_4c == '\0') && (local_4b != '\0')) {
        local_80 = &local_f8;
        local_78 = 0;
        local_168 = (char *)0x3;
        local_180[0] = (PVOID)0x2;
        cVar2 = FUN_1801d3ac0(&local_80,local_c0,&local_168,local_180,
                              (ulonglong)in_stack_fffffffffffff988 & 0xffffffff00000000);
        local_49 = cVar2;
        local_80[3] = (undefined8 *)((longlong)local_80[3] + 1);
        DVar1 = local_658.Rsp;
      }
      if (cVar2 != '\0') break;
      local_180[0] = (PVOID)0x0;
      local_168 = (char *)0x0;
      in_stack_fffffffffffff988 = &local_658;
      local_658.Rsp = DVar1;
      RtlVirtualUnwind(0,local_68,ControlPc,FunctionEntry,in_stack_fffffffffffff988,local_180,
                       (PDWORD64)&local_168,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
      if ((local_658.Rip == 0) || ((local_658.Rip == ControlPc && (local_658.Rsp == DVar1)))) break;
      uVar4 = uVar4 + 1;
    }
    if ((local_49 == '\0') &&
       (((char)local_60 != '\0' ||
        (cVar2 = (**(code **)(local_58[1] + 0x18))(*local_58,&DAT_18028fff0,0x58), cVar2 == '\0'))))
    {
      uVar5 = 0;
      uVar3 = 0;
      local_658.P1Home = local_a8;
      goto joined_r0x0001801e6663;
    }
    local_658.P1Home = local_a8;
  }
  uVar5 = 1;
  uVar3 = 1;
joined_r0x0001801e6663:
  if ((local_658.P1Home & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(CONCAT44(uStack_9c,local_a0),local_658.P1Home,1);
    uVar3 = uVar5;
  }
  return uVar3;
}


