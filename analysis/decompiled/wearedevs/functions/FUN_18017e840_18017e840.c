/* FUN_18017e840 @ 18017e840 */

undefined8 FUN_18017e840(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *_Dst;
  longlong *local_180;
  undefined8 local_178 [15];
  undefined8 local_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *local_38;
  undefined8 local_28;
  
  local_38 = local_178;
  local_28 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x28) != '\0') {
    FUN_1801d6710(0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
    return 1;
  }
  local_180 = (longlong *)0x1;
  local_178[0] = 1;
  local_c0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f6 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0x100,0x80);
  if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x100);
  }
  memcpy(_Dst,&local_180,0x100);
  LOCK();
  lVar1 = *_Dst;
  *_Dst = *_Dst + 1;
  UNLOCK();
  if (*_Dst != 0 && SCARRY8(lVar1,1) == *_Dst < 0) {
    local_180 = _Dst + 0x10;
    plVar2 = *(longlong **)(param_2 + 0x18);
    if (plVar2 != local_180) {
      _Dst[0x11] = (longlong)plVar2;
      _Dst[0x10] = 0;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)local_180;
      }
      *(longlong **)(param_2 + 0x18) = local_180;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(longlong **)(param_2 + 0x20) = local_180;
      }
      return 0;
    }
    FUN_1801fb018(CONCAT71((int7)((ulonglong)plVar2 >> 8),1),param_2 + 0x18,&local_180,0);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


