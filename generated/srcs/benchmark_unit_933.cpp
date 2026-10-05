#include "bench/fib.hpp"

// RE Benchmark TU 933 of 20000 (depth=28, stamp="default")
namespace bench_tu_933 {
constexpr unsigned long long result = ::bench::slow_fib<28, 933>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_933
