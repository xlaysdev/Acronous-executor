/* FUN_1800aa090 @ 1800aa090 */

undefined8 * FUN_1800aa090(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *_Dst;
  undefined8 uVar3;
  longlong **_Src;
  longlong *local_280;
  undefined8 local_278 [15];
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_38;
  undefined8 local_28;
  
  local_38 = local_278;
  local_28 = 0xfffffffffffffffe;
  FUN_180027490();
  local_200 = thunk_FUN_1801d32d0(0x2320,8);
  if (local_200 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x2320);
  }
  *(undefined8 *)(local_200 + 0x2310) = 0;
  *(undefined8 *)(local_200 + 0x2318) = 0;
  *(undefined8 *)(local_200 + 0x2300) = 0;
  *(undefined8 *)(local_200 + 0x2308) = 0;
  local_1f8 = 0;
  local_d0 = 0;
  local_280 = (longlong *)0x1;
  local_278[0] = 1;
  local_180 = 0;
  local_170 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 1;
  local_b0 = 0;
  local_e0 = local_200;
  local_d8 = local_200;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0x200,0x80);
  if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x200);
  }
  _Src = &local_280;
  memcpy(_Dst,_Src,0x200);
  LOCK();
  lVar1 = *_Dst;
  *_Dst = *_Dst + 1;
  UNLOCK();
  if (*_Dst == 0 || SCARRY8(lVar1,1) != *_Dst < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_280 = _Dst;
  uVar3 = FUN_18012bf50();
  *param_1 = uVar3;
  param_1[1] = _Dst;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = _Dst;
  param_1[4] = _Src;
  return param_1;
}


