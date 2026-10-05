#include "bench/fib.hpp"

// RE Benchmark TU 4221 of 20000 (depth=28, stamp="default")
namespace bench_tu_4221 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4221>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4221
