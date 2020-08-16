#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid in form of a boolean
bool vote(int voter, int rank, string name)
{
    // loop through candidates
    for (int i = 0; i < candidate_count; i++)
    {
        // test print of loop content
        // printf(" loop value: %s\n", candidates[i].name);

        // if voter input name matches a commandline input candidate than return true and update preferences else return false;
        if (strcmp(name, candidates[i].name) == 0)
        {

            //set preferences
            preferences[voter][rank] = i;
            // printf("true\n");
            return true;
        }
        // else {
        //     printf("not true condition hit\n");
        // }
    }
    // printf("false\n");
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // each voter to vote for their highest preferred candidate who has not yet been elimated
    // PSUEDO

    //loop through voter_count to access their preferences
    for (int i = 0; i < voter_count; i++)
    {
        //j set to 0 to loop through each voters first preference;
        int j = 0;
        int votes = 0;
        //candidate rank is eliminated increment up j to access the next available candidate to tally a vote for
        while (candidates[preferences[i][j]].eliminated == true)
        {
            j++;
        }
        //log votes;
        candidates[preferences[i][j]].votes++;
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // TODO
    int winner = round((voter_count / 2) + 0.5);
    // TODO
    for (int k = 0; k < voter_count; k++)
    {
        if (candidates[k].votes >= winner)
        {
            printf("%s\n", candidates[k].name);
            return true;
        }
    }
    return false;

}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // TODO
    int loser = candidates[0].votes;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes <= loser && candidates[i].eliminated == false)
        {
            loser = candidates[i].votes;
        }
    }
    return loser;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // TODO
    bool isTie = false;
    for (int i = 0; i < candidate_count; i++)
    {

        if (candidates[i].eliminated == false && candidates[i].votes == min)
        {
            isTie = true;
        }
        else if (candidates[i].eliminated == false && candidates[i].votes > min)
        {
            isTie = false;
        }
    }
    return isTie;

}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    // TODO
    for (int l = 0; l < candidate_count; l++)
    {
        if (candidates[l].votes == min)
        {
            candidates[l].eliminated = true;
        }
    }
    return;
}