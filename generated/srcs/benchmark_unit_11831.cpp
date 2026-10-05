#include "bench/fib.hpp"

// RE Benchmark TU 11831 of 20000 (depth=28, stamp="default")
namespace bench_tu_11831 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11831>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11831
