/* FUN_1801b4440 @ 1801b4440 */

bool FUN_1801b4440(void)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = SetThreadErrorMode(1,&local_4);
  return local_4 != 1 && BVar1 != 0;
}


