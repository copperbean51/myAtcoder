### Initization

**acc, oj login**
acc, oj で AtCoder のユーザー名とパスワードを入力してログインする

```bash
    # check download 
    acc check-oj
    # login acc
    acc login
    # login oj
    oj login https://beta.atcoder.jp
```

**Changing the setting of acc**
Default setting for downloading all of questions

```bash
    acc config default-task-choice all
```


### Download the questions
When executing vscode task `abc_dl`, `arc_dl`，abc, arc questions should be downloaded.

- abc questions download to -> `src/atcoder/abc/`
- arc questions download to -> `src/atcoder/arc/`

**Result**
- `abc001/` -> A, B, C, ...Directly of questions
- `abc001/a/test/` -> A question testcase is downloaded 
- `abc001/a/abc001_a.cpp` -> A question result is copied to `/app/templates/atcoder.cpp`

```bash
└── src/atcoder/abc
　　        　    └── abc001
　　        　        │── a
　　        　        │    ├── abc001_a.cpp
　　        　        │    └── tests
　　        　        │        ├── sample-1.in
　　        　        │        ├── sample-1.out
　　        　        │        ├── sample-2.in
　　        　        │        ├── sample-2.out
　　        　        │        ├── sample-3.in
　　        　        │        └── sample-3.out
　　　　　　　　      　└── b
                    (略)
```

### Test
Open cpp file for answer, and execute vscode TASK RUNNER `test` for starting test. 


### Submit
Open cpp file for answer,and execute vscode TASK RUNNER `submit` for submitting answer.
