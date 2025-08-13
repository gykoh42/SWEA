import java.util.*;

public class Solution {
    static int N, B;
    static int[] heights;
    static int best;
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        for (int tc = 1; tc <= T; tc++) {
            N = sc.nextInt();
            B = sc.nextInt();
            heights = new int[N];
            for (int i = 0; i < N; i++) {
                heights[i] = sc.nextInt();
            }

            best = Integer.MAX_VALUE;
            // 키 순으로 오름차순 정렬해두고 시작
            Arrays.sort(heights);
            
            // 내림차순으로 뒤집기
            int[] tmp = new int[N];
            int index = 0;
            for (int i = N - 1; i >= 0; i--) {
                tmp[index] = heights[i];
                index++;
            }
            heights = tmp;
            dfs(0, 0); 
            System.out.println("#" + tc + " " + (best - B));
        }

        sc.close();
    }

    static void dfs(int idx, int sum) {
        // B 이상이면 최소합 갱신 후 리턴
        if (sum >= B) {
            if (sum < best) {
                best = sum;
            }
            return;
        }
        // 모든 직원 확인 완료 -> 종료
        if (idx == N) {
            return;
        }
        dfs(idx + 1, sum + heights[idx]); // 현재 직원을 선택하는 경우
        dfs(idx + 1, sum); // 현재 직원을 선택하지 않는 경우
    }
}
