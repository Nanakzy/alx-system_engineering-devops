Postmortem: Web Stack Outage - May 10, 2024
Issue Summary:
Duration: May 10, 2024, 10:00 AM - 12:30 PM (South African Standard Time, UTC+2)
Impact: Intermittent downtime and slow response times affected approximately 30% of users.
Timeline:
10:00 AM (SAST): Monitoring alerts indicated increased error rates and latency.
10:05 AM (SAST): Engineers observed reduced traffic, suggesting service disruption.
10:10 AM (SAST): Initial investigation focused on recent database updates.
10:30 AM (SAST): Misleading assumption: Database query optimization considered the root cause.
10:45 AM (SAST): Incident escalated to the database team; no abnormalities found.
11:00 AM (SAST): Escalated to the networking team, revealing a DDoS attack.
12:00 PM (SAST): DDoS mitigation measures implemented; traffic rerouted.
12:30 PM (SAST): Normal service resumed as traffic stabilized.
Root Cause and Resolution:
Root Cause: DDoS attack targeting a critical API endpoint overwhelmed the system.
Resolution: Implemented DDoS mitigation measures and enhanced monitoring/alerting systems.
Corrective and Preventative Measures:
Improvements/Fixes:
Strengthen DDoS mitigation capabilities with robust traffic filtering.
Review and update incident response protocols for faster resolution.
Conduct comprehensive security audit to address vulnerabilities.
Tasks:
Implement rate limiting on critical API endpoints.
Conduct post-incident review to identify improvement areas.
Adjust monitoring thresholds for early detection of abnormal traffic.
By taking these measures, we aim to minimize the impact of future incidents and ensure the resilience of our web infrastructure.
