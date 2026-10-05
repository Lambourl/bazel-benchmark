#include "bench/fib.hpp"

// RE Benchmark TU 6094 of 20000 (depth=28, stamp="default")
namespace bench_tu_6094 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6094>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6094
