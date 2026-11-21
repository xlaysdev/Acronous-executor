/* FUN_1801c52b0 @ 1801c52b0 */

void FUN_1801c52b0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(ulonglong **)(lVar1 + 200) != param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: t.get().eq(&(self as *const _))",0x31,&DAT_180287be8,param_4,
                  param_1,0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar1 + 200) = 0;
  plVar2 = (longlong *)param_1[0x23];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(param_1 + 0x23);
  }
  plVar2 = (longlong *)param_1[0x27];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(param_1 + 0x27);
  }
  uVar3 = param_1[0x10];
  puVar4 = (ulonglong *)param_1[1];
  for (uVar6 = *param_1 & 0xfffffffffffffffe; uVar6 != (uVar3 & 0xfffffffffffffffe);
      uVar6 = uVar6 + 2) {
    puVar5 = puVar4;
    if ((~(uint)uVar6 & 0x7e) == 0) {
      puVar5 = (ulonglong *)*puVar4;
      thunk_FUN_1801d3330(puVar4,0x5f0,8);
    }
    puVar4 = puVar5;
  }
  thunk_FUN_1801d3330(puVar4,0x5f0,8);
  plVar2 = (longlong *)param_1[0x22];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c64c0(param_1 + 0x22);
    return;
  }
  return;
}


