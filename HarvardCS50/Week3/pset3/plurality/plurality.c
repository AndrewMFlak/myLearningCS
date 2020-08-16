#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Number of voters
int voter_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
// void check_votes(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    // check_votes();
    print_winner();
}



// Update vote totals given a new vote
bool vote(string name)
{
    // loop through candidates to ensure that
    for (int i = 0; i < candidate_count; i++)
    {
        int placeholder = candidates[i].votes;

        if (strcmp(name, candidates[i].name) == 0)
        {
            // if voted name equals candidate increment up vote count
            candidates[i].votes += 1;
            return true;
            // printf("%i\n", candidates[i].votes);
        }

    }
    return false;

}

// Print the winner (or winners) of the election
void print_winner(void)
{
    typedef struct
    {
        string name;
        int votes;
    }
    winners;

    int currentWinner = 0;
    int pastWinner = 0;
    int a = 0;
    int count = 0;
    winners winningCandidates[9];

    // TODO
    for (int v = 0; v < candidate_count; v++)
    {
        // printf("%i\n",candidates[v].votes);
        // printf("%s\n",candidates[v].name);
        if (currentWinner <= candidates[v].votes)
        {
            currentWinner = candidates[v].votes;
            winningCandidates[a].name = candidates[v].name;
            winningCandidates[a].votes = candidates[v].votes;
            a++;
            count = a;
        }
        else if (currentWinner == candidates[v].votes)
        {
            winningCandidates[a].name = candidates[v].name;
            winningCandidates[a].votes = candidates[v].votes;
            a++;
            count = a;
        }
    }
    for (int w = 0; w < count; w++)
    {
        printf("%s\n", winningCandidates[w].name);
        // printf("%i\n", winningCandidates[w].votes);
    }

    return;
}
