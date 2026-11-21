/* FUN_1801f9160 @ 1801f9160 */

longlong * FUN_1801f9160(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  void *_Dst;
  size_t *psVar5;
  size_t _Size;
  char *_Src;
  
  FUN_180027490();
  plVar4 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
  if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *plVar4 = 0;
  *(undefined2 *)(plVar4 + 2) = 0x601;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    _Src = "runtime dropped the dispatch task";
    _Size = 0x21;
  }
  else {
    cVar3 = FUN_180200a50();
    _Size = 0x12;
    if (cVar3 != '\0') {
      _Size = 0x21;
    }
    _Src = "user code panicked";
    if (cVar3 != '\0') {
      _Src = "runtime dropped the dispatch task";
    }
  }
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,_Size);
  }
  memcpy(_Dst,_Src,_Size);
  FUN_180027490();
  psVar5 = (size_t *)thunk_FUN_1801d32d0(0x18,8);
  if (psVar5 == (size_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *psVar5 = _Size;
  psVar5[1] = (size_t)_Dst;
  psVar5[2] = _Size;
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)plVar4[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  *plVar4 = (longlong)psVar5;
  plVar4[1] = (longlong)&PTR_LAB_18023f9e0;
  return plVar4;
}


