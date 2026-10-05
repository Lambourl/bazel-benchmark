#include "bench/fib.hpp"

// RE Benchmark TU 10444 of 20000 (depth=28, stamp="default")
namespace bench_tu_10444 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10444>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10444
