#include "bench/fib.hpp"

// RE Benchmark TU 918 of 20000 (depth=28, stamp="default")
namespace bench_tu_918 {
constexpr unsigned long long result = ::bench::slow_fib<28, 918>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_918
