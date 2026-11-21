/* FUN_180200e50 @ 180200e50 */

void FUN_180200e50(undefined8 *param_1,longlong param_2,LPVOID param_3,ulonglong param_4)

{
  bool bVar1;
  longlong lVar2;
  HANDLE hHeap;
  undefined1 *puVar3;
  ulonglong dwBytes;
  undefined8 uVar4;
  
  dwBytes = param_4 * 0x10;
  bVar1 = param_4 >> 0x3c != 0;
  uVar4 = 1;
  if (0x7ffffffffffffff8 < dwBytes || bVar1) {
    lVar2 = 8;
    dwBytes = 0;
    goto LAB_180200eed;
  }
  if (param_2 == 0) {
    if (dwBytes != 0) {
      puVar3 = (undefined1 *)
               FUN_1801dc500(CONCAT71(0x7fffffffffffff,0x7ffffffffffffff8 < dwBytes || bVar1),0,
                             dwBytes);
      goto joined_r0x000180200ecb;
    }
    puVar3 = &DAT_00000008;
  }
  else {
    hHeap = GetProcessHeap();
    puVar3 = HeapReAlloc(hHeap,0,param_3,dwBytes);
joined_r0x000180200ecb:
    if (puVar3 == (undefined1 *)0x0) {
      param_1[1] = 8;
      lVar2 = 0x10;
      goto LAB_180200eed;
    }
  }
  param_1[1] = puVar3;
  lVar2 = 0x10;
  uVar4 = 0;
LAB_180200eed:
  *(ulonglong *)((longlong)param_1 + lVar2) = dwBytes;
  *param_1 = uVar4;
  return;
}


